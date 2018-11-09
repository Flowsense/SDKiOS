#import <UIKit/UIKit.h>

@interface Cordova : NSObject

+(void) startLocationTracker;
+(void) StartFlowsenseService:(NSString *)partnerToken;
+(void) StartFlowsenseService:(NSString *)partnerToken :(BOOL) startNow;
+(void) StartMonitoringLocation;
+(void) requestWhenInUseLocation;
+(void) requesAlwaysLocation;
+(void) StartFlowsensePushService:(NSDictionary *) launchOptions;
+(void) updatePartnerUserIdiOS:(NSString *) userId;
+(void) downloadGeofences;
+(NSString *) getDeviceID;

@end
