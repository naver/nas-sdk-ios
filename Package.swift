// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "NaverAdsServices",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(
            name: "NaverAdsServices",
            targets: ["NAS"]
        ),
    ],
    targets: [
        // NAS
        .binaryTarget(
            name: "NAS_Binary",
            path: "NaverAdsServices/xcframework/NaverAdsServices.xcframework"
        ),
        .target(
            name: "NAS",
            dependencies: ["NAS_Binary"],
            path: "NaverAdsServices/SPM/Sources"
        ),

        // Test
        .testTarget(
            name: "NaverAdsServicesTests",
            dependencies: ["NAS"],
            path: "NaverAdsServices/SPM/Tests"
        )
    ]
)
