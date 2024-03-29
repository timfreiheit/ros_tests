;; Auto-generated. Do not edit!


(when (boundp 'exploration_msgs::ExploreGoal)
  (if (not (find-package "EXPLORATION_MSGS"))
    (make-package "EXPLORATION_MSGS"))
  (shadow 'ExploreGoal (find-package "EXPLORATION_MSGS")))
(unless (find-package "EXPLORATION_MSGS::EXPLOREGOAL")
  (make-package "EXPLORATION_MSGS::EXPLOREGOAL"))

(in-package "ROS")
;;//! \htmlinclude ExploreGoal.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass exploration_msgs::ExploreGoal
  :super ros::object
  :slots (_explore_boundary _explore_center ))

(defmethod exploration_msgs::ExploreGoal
  (:init
   (&key
    ((:explore_boundary __explore_boundary) (instance geometry_msgs::PolygonStamped :init))
    ((:explore_center __explore_center) (instance geometry_msgs::PointStamped :init))
    )
   (send-super :init)
   (setq _explore_boundary __explore_boundary)
   (setq _explore_center __explore_center)
   self)
  (:explore_boundary
   (&rest __explore_boundary)
   (if (keywordp (car __explore_boundary))
       (send* _explore_boundary __explore_boundary)
     (progn
       (if __explore_boundary (setq _explore_boundary (car __explore_boundary)))
       _explore_boundary)))
  (:explore_center
   (&rest __explore_center)
   (if (keywordp (car __explore_center))
       (send* _explore_center __explore_center)
     (progn
       (if __explore_center (setq _explore_center (car __explore_center)))
       _explore_center)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/PolygonStamped _explore_boundary
    (send _explore_boundary :serialization-length)
    ;; geometry_msgs/PointStamped _explore_center
    (send _explore_center :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/PolygonStamped _explore_boundary
       (send _explore_boundary :serialize s)
     ;; geometry_msgs/PointStamped _explore_center
       (send _explore_center :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/PolygonStamped _explore_boundary
     (send _explore_boundary :deserialize buf ptr-) (incf ptr- (send _explore_boundary :serialization-length))
   ;; geometry_msgs/PointStamped _explore_center
     (send _explore_center :deserialize buf ptr-) (incf ptr- (send _explore_center :serialization-length))
   ;;
   self)
  )

(setf (get exploration_msgs::ExploreGoal :md5sum-) "b5f41b52fbca52a68ff7363f86187dbf")
(setf (get exploration_msgs::ExploreGoal :datatype-) "exploration_msgs/ExploreGoal")
(setf (get exploration_msgs::ExploreGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#Boundary for frontier exploration
geometry_msgs/PolygonStamped explore_boundary
#Center point for frontier exploration, inside explore_boundary
geometry_msgs/PointStamped explore_center

================================================================================
MSG: geometry_msgs/PolygonStamped
# This represents a Polygon with reference coordinate frame and timestamp
Header header
Polygon polygon

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Polygon
#A specification of a polygon where the first and last points are assumed to be connected
Point32[] points

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z
================================================================================
MSG: geometry_msgs/PointStamped
# This represents a Point with reference coordinate frame and timestamp
Header header
Point point

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

")



(provide :exploration_msgs/ExploreGoal "b5f41b52fbca52a68ff7363f86187dbf")


