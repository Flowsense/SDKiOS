typedef NS_ENUM(NSInteger, UIApplicationReleaseMode) {
    UIApplicationReleaseUnknown,
    UIApplicationReleaseDev,
    UIApplicationReleaseAdHoc,
    UIApplicationReleaseWildcard,
    UIApplicationReleaseAppStore,
    UIApplicationReleaseSim,
    UIApplicationReleaseEnterprise
};

@interface FlowsenseMobileProvision : NSObject

+ (UIApplicationReleaseMode) releaseMode;

@end
