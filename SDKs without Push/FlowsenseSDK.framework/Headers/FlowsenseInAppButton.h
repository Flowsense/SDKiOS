#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FlowsenseInAppButton : NSObject

@property (strong, nonatomic) NSString *btnID, *text, *deeplink;
@property (strong, nonatomic) NSArray<NSString *> *actions;

- (instancetype) initWithDictionary:(NSDictionary *) dict;

@end

NS_ASSUME_NONNULL_END
