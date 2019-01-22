#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface Cordova : NSObject

+(void) startLocationTracker;
+(void) StartFlowsenseService:(NSString *)partnerToken;
+(void) StartFlowsenseService:(NSString *)partnerToken :(BOOL) startNow;
+(void) StartMonitoringLocation;
+(int) requestLocationAuthorizationStatus;
+(void) requestWhenInUseLocation;
+(void) requestAlwaysLocation;
+(void) requestWhenInUseLocationWithCallback:(void(^)(int status)) callback;
+(void) requestAlwaysLocationWithCallback:(void(^)(int status)) callback;
+(void) StartFlowsensePushService:(NSDictionary *) launchOptions;
+(void) updatePartnerUserIdiOS:(NSString *) userId;
+(void) downloadGeofences;
+(NSString *) getDeviceID;
+(void) requestPushToken;
+(void) isRegisteredForPush;

@end
