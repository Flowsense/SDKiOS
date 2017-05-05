#import <UIKit/UIKit.h>

@interface Service_fs : NSObject

+(void) StartFlowsenseService:(NSString *)partnerToken;
+(void) StartFlowsenseService:(NSString *)partnerToken :(BOOL) startNow;

+(void) StartFlowsensePushService:(NSDictionary *) launchOptions;
+(void) sendPushToken:(NSString *)token;
+(NSDictionary *) getPushExtras;

+(void) StartMonitoringLocation;
+(void) updatePartnerUserIdiOS:(NSString *) userId;

+(void) updateGeofences;
+(NSArray *) getStoredGeofences;
+(NSArray *) getKeyValues;

+(void) insertToDB:(long) rows;

@end
