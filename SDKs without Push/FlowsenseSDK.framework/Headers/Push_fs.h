#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>

@interface Push_fs : NSObject <UNUserNotificationCenterDelegate>

NS_ASSUME_NONNULL_BEGIN

+(void) flowsenseHandlePushPayload:(NSDictionary*)userInfo;
+(void) flowsenseHandlePushPayload:(NSDictionary *)userInfo withApplication:(UIApplication*)application;
+(void) flowsenseHandlePushPayload:(NSDictionary *)userInfo withResponse:(UNNotificationResponse *)response;
+(void) scheduleLocalNotification:(NSDictionary *)dict;
+(void) sendNotification:(NSString *)title :(NSString *)body :(NSDictionary *)userInfo;
+(void) takePushActionsWithType:(NSString*)type fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;
+(void) includeMediaAttachmentWithRequest:(UNNotificationRequest *)request mutableContent:(UNMutableNotificationContent *)bestAttemptContent contentHandler:(void (^)(UNNotificationContent * _Nonnull))contentHandler;
+(void) sendPushAnalyticsWithPushUUID:(NSString *)push_uuid action:(NSString *)action;
+(void) changeViewWithStoryboard:(NSString *)storyboardName viewIdentifier:(NSString *)payload;
+(void) changeViewInIonicWhenClosed:(NSString *)identifier;
+(void) changeViewInIonic:(NSString *)identifier;
+(void) openAppWithURI:(NSString *)uri storeLink:(NSString *)iTunesLink storeID:(NSNumber *) storeID;
+(void) registerToken:(NSData *)deviceToken;
+(void) checkAndSendToken;
+(void) PostPushToken:(NSString *)token;

NS_ASSUME_NONNULL_END

@end
