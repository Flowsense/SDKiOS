#import <UIKit/UIKit.h>

@interface Service_fs : NSObject

+(void) StartFlowsenseService:(NSString *)partnerToken;
+(void) StartFlowsenseService:(NSString *)partnerToken :(BOOL) startNow;
+(void) StartFlowsensePushService:(NSDictionary *) launchOptions;
+(void) StartMonitoringLocation;
+(void) postToken:(NSData *)token;
+(void) PostJsonCreate;
+(void) updatePartnerUserIdiOS:(NSString *) userId;
+(NSString *) getSDKVersion;

+(void) updateGeofences;
+(NSArray *) getStoredGeofences;
+(NSArray *) getKeyValues;
@end
