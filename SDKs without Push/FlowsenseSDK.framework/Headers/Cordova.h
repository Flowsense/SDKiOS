#import <UIKit/UIKit.h>

@interface Cordova : NSObject

+(void) startLocationTracker;
+(void) StartFlowsenseService:(NSString *)partnerToken;
+(void) StartFlowsensePushService:(NSDictionary *) launchOptions;
+(void) PostJsonCreate;
+(void) updatePartnerUserIdiOS:(NSString *) userId;
+(NSString *) getSDKVersion;
+(void) downloadGeofences;

@end
