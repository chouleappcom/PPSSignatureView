// swift-tools-version:5.1
import PackageDescription

let package = Package(
    name: "PPSSignatureView",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        .library(name: "PPSSignatureView", targets: ["PPSSignatureView"])
    ],
    dependencies: [
    ],
    targets: [
        .target(
            name: "PPSSignatureView",
            dependencies: [],
            path: ".",
            sources: [
                "Source"
            ],
            publicHeadersPath: "Source",
            linkerSettings: [
                .linkedFramework("UIKit"),
                .linkedFramework("GLKit")
            ]
        )
    ],
    swiftLanguageVersions: [.v5]
)
