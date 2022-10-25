#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FlowsenseInAppModel : NSObject

@property (strong, nonatomic) NSString *msgID, *type, *category, *name, *htmlURL, *backgroundURL, *backgroundColor, *themeColor, *closeButtonPosition;
@property (nonatomic) BOOL must_validate, startup;
@property (strong, nonatomic) NSArray<NSString *> *triggeringInAppEvents, *disallowedViews, *poiIDs;
@property (strong, nonatomic) NSDictionary<NSString *, NSArray<NSArray<NSString *> *> *> *daysAndTime;
@property (nonatomic) int priority, timeout, globalTimedelta, globalMaxViewsPerTimedelta, globalMaxViewsPerSession, categoryTimedelta, categoryMaxViewsPerTimedelta, categoryMaxViewsPerSession, messageTimedelta, messageMaxViewsPerTimedelta, messageMaxViewsPerSession;
@property (strong, nonatomic) NSArray<NSDictionary *> *inAppContent;

@end

NS_ASSUME_NONNULL_END
