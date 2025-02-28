// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SwiftAA",
    platforms: [
        .macOS(.v10_13), .iOS(.v12),
    ],
    products: [
        // Products define the executables and libraries produced by a package, and make them visible to other packages.
        .library(
            name: "AAplus",
            type: .dynamic,
            targets: ["AAplus"]
        ),
        .library(
            name: "ObjCAA",
            targets: ["ObjCAA"]
        ),
        .library(
            name: "SwiftAA",
            type: .dynamic,
            targets: ["SwiftAA"]
        )
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages which this package depends on.
        .target(
            name: "AAplus",
            dependencies: [],
            path: "Sources/AA+",
            exclude: ["naughter.css",
                      "CMakeLists.txt",
                      "AA+.htm",
                      "include/AAVSOP2013.h",
                      "include/AA+.h",
                      "AAVSOP2013.cpp",
                      "AATest.cpp"]
        ),
        .target(
            name: "ObjCAA",
            dependencies: ["AAplus"],
            exclude: []
        ),
        .target(
            name: "SwiftAA",
            dependencies: ["ObjCAA"],
            exclude: []
        ),
        .testTarget(
            name: "ObjCAATests",
            dependencies: ["ObjCAA"]),
        .testTarget(
            name: "SwiftAATests",
            dependencies: ["SwiftAA"]),
    ],
    cxxLanguageStandard: .gnucxx17
)
