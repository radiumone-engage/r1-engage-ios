#import <Foundation/Foundation.h>

@interface R1AdvertiserSDK : NSObject

@property (nonatomic, copy) NSString *offerUrl;

+ (instancetype)sharedInstance;

- (void)signalGoalReached;

@end
