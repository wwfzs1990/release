/*********************************************************************
*
* Software License Agreement (BSD License)
*
*  Copyright (c) 2008, Willow Garage, Inc.
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*   * Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*   * Redistributions in binary form must reproduce the above
*     copyright notice, this list of conditions and the following
*     disclaimer in the documentation and/or other materials provided
*     with the distribution.
*   * Neither the name of the Willow Garage nor the names of its
*     contributors may be used to endorse or promote products derived
*     from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
*  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
*  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
*  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
*  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
*  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*
* Author: Eitan Marder-Eppstein
*********************************************************************/
#ifndef MIXED_PLANNER_H_
#define MIXED_PLANNER_H_

#include <ros/ros.h>
#include <navfn/navfn_ros.h>
#include <global_planner/fixed_planner_core.h>
#include <dynamic_reconfigure/server.h>
#include <scheduling_msgs/PathWithID.h>
#include <scheduling_msgs/PathStampWithID.h>
#include <mixed_planner/MixedPlannerConfig.h>
#include <mixed_planner/FixedPlannerConfig.h>


namespace global_planner {
  /**
   * @class NavfnROS
   * @brief Provides a ROS wrapper for the navfn planner which runs a fast, interpolated navigation function on a costmap.
   */
  class MixedPlanner : public nav_core::BaseGlobalPlanner {
    public:
      /**
       * @brief  Default constructor for the NavFnROS object
       */
       MixedPlanner();

      /**
       * @brief  Constructor for the NavFnROS object
       * @param  name The name of this planner
       * @param  costmap A pointer to the ROS wrapper of the costmap to use
       */
       MixedPlanner(std::string name, costmap_2d::Costmap2DROS* costmap_ros, std::string frame_id);

       ~MixedPlanner();

      /**
       * @brief  Initialization function for the NavFnROS object
       * @param  name The name of this planner
       * @param  costmap A pointer to the ROS wrapper of the costmap to use for planning
       */
      void initialize(std::string name, costmap_2d::Costmap2DROS* costmap_ros, std::string frame_id);
      
      void initialize(std::string name, costmap_2d::Costmap2DROS* costmap_ros);
      /**
       * @brief Given a goal pose in the world, compute a plan
       * @param start The start pose 
       * @param goal The goal pose 
       * @param plan The plan... filled by the planner
       * @return True if a valid plan was found, false otherwise
       */
      bool makePlan(const geometry_msgs::PoseStamped& start, 
          const geometry_msgs::PoseStamped& goal, std::vector<geometry_msgs::PoseStamped>& plan);

      /**
       * @brief Given a goal pose in the world, compute a plan
       * @param start The start pose 
       * @param goal The goal pose 
       * @param tolerance The tolerance on the goal point for the planner
       * @param plan The plan... filled by the planner
       * @return True if a valid plan was found, false otherwise
       */
      bool makePlan(const geometry_msgs::PoseStamped& start, 
          const geometry_msgs::PoseStamped& goal, double tolerance, std::vector<geometry_msgs::PoseStamped>& plan);

      /**
       * @brief  Publish a path for visualization purposes
       */
      void publishPlan(const std::vector<geometry_msgs::PoseStamped>& path, double r, double g, double b, double a);

      
      boost::shared_ptr<navfn::NavfnROS> navfn_planner_;
      boost::shared_ptr<global_planner::FixedGlobalPlanner> fixed_planner_;

    protected:

      /**
       * @brief Store a copy of the current costmap in \a costmap.  Called by makePlan.
       */
      costmap_2d::Costmap2DROS* costmap_ros_;
      std::string frame_id_;
      bool initialized_;
      costmap_2d::Costmap2D* costmap_;

    private:
      bool planner_is_navfn_; //planner switch for navfn and fixed, true for navfn , false for fixed.
      scheduling_msgs::PathStampWithID specified_path_; 
    
      void path_callback(scheduling_msgs::PathStampWithID path);
      dynamic_reconfigure::Server<::mixed_planner::MixedPlannerConfig> *dsrv_m_;  //dynamic_reconfigure of mixed planner
      dynamic_reconfigure::Server<::mixed_planner::FixedPlannerConfig> *dsrv_f_;  //dynamic_reconfigure of fixed planner
      void reconfigureCB_m(::mixed_planner::MixedPlannerConfig &config, uint32_t level);
      void reconfigureCB_f(::mixed_planner::FixedPlannerConfig &config, uint32_t level);
  };
} //end namespace global_planner

#endif
