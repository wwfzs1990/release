
(cl:in-package :asdf)

(defsystem "scheduling_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "AgvList" :depends-on ("_package_AgvList"))
    (:file "_package_AgvList" :depends-on ("_package"))
    (:file "TaskStatus" :depends-on ("_package_TaskStatus"))
    (:file "_package_TaskStatus" :depends-on ("_package"))
    (:file "NewTask2" :depends-on ("_package_NewTask2"))
    (:file "_package_NewTask2" :depends-on ("_package"))
    (:file "Path" :depends-on ("_package_Path"))
    (:file "_package_Path" :depends-on ("_package"))
    (:file "AgvPose" :depends-on ("_package_AgvPose"))
    (:file "_package_AgvPose" :depends-on ("_package"))
    (:file "NewTask" :depends-on ("_package_NewTask"))
    (:file "_package_NewTask" :depends-on ("_package"))
    (:file "ServerStatus" :depends-on ("_package_ServerStatus"))
    (:file "_package_ServerStatus" :depends-on ("_package"))
    (:file "Agv" :depends-on ("_package_Agv"))
    (:file "_package_Agv" :depends-on ("_package"))
    (:file "PathWithID" :depends-on ("_package_PathWithID"))
    (:file "_package_PathWithID" :depends-on ("_package"))
    (:file "PathStampWithID" :depends-on ("_package_PathStampWithID"))
    (:file "_package_PathStampWithID" :depends-on ("_package"))
    (:file "Task" :depends-on ("_package_Task"))
    (:file "_package_Task" :depends-on ("_package"))
    (:file "TaskList" :depends-on ("_package_TaskList"))
    (:file "_package_TaskList" :depends-on ("_package"))
  ))