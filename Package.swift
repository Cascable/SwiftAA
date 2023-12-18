// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SwiftAA",
    platforms: [.macOS(.v10_13), .iOS(.v12)],
    products: [
        // The AAPlus product is the C++ project this one wraps. 
        .library(name: "AAPlus", targets: ["AAPlus"]),
        // The AABridge product provides C (not Objective-C) bindings for AAPlus for Swift to use.
        .library(name: "AABridge", targets: ["AABridge"]),
        // …and finally, SwiftAA provides the Swift interface.
        .library(name: "SwiftAA", targets: ["SwiftAA"])
    ],
    targets: [
        .target(
            name: "AAPlus", path: "Sources/AAPlus",
            exclude: ["naughter.css", "CMakeLists.txt", "AA+.htm", "AAVSOP2013.h", "AA+.h", "AAVSOP2013.cpp", "AATest.cpp"],
            publicHeadersPath: ""
        ),
        .target(name: "AABridge", dependencies: ["AAPlus"],
            cSettings: [.headerSearchPath("Sources/AAPlus"), .headerSearchPath("Sources/AABridge/include")], 
            cxxSettings: [.headerSearchPath("Sources/AAPlus"), .headerSearchPath("Sources/AABridge/include")]
        ),
        .target(name: "SwiftAA", dependencies: ["AABridge"], 
            exclude: ["SwiftAA-Info.plist"]
        )
    ] + testTargets,
    cxxLanguageStandard: .gnucxx17
)

#if os(Windows)
var testTargets: [Target] {
    return [
        // Auto-test discovery barfs on AABridgeTests on Windows, seemingly due to it emitting nothing on the platform.
        .testTarget(
            name: "SwiftAATests", dependencies: ["SwiftAA"],
            exclude: ["SwiftAATests-Info.plist"]
        )
    ]
}
#else
var testTargets: [Target] {
    return [
        .testTarget(
            name: "AABridgeTests", dependencies: ["AABridge"]
        ),
        .testTarget(
            name: "SwiftAATests", dependencies: ["SwiftAA"],
            exclude: ["SwiftAATests-Info.plist"]
        )
    ]
}
#endif
