import Foundation

#if os(Windows) 
typealias BridgedLongType = Int32
#else
typealias BridgedLongType = Int
#endif
