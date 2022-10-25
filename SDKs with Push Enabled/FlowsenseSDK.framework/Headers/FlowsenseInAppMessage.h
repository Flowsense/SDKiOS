#import <Foundation/Foundation.h>
#import "FlowsenseInAppModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface FlowsenseInAppMessage : NSObject

@property (strong, nonatomic) NSString *msgID, *type, *category, *name, *backgroundColor, *backgroundURL, *htmlURL;

- (instancetype) initWithDictionary:(FlowsenseInAppModel *) flowsenseInAppModel;

@end

NS_ASSUME_NONNULL_END
