#import "R1EngageViewControllers.h"
#import "R1EngageBannerViews.h"

typedef enum
{
    R1EngageGenderNotSelected = 0,
    R1EngageGenderMale,
    R1EngageGenderFemale
} R1EngageGender;

typedef enum
{
    R1EngageServerTypeProduction,
    R1EngageServerTypeStaging,
    R1EngageServerTypeTest1,
    R1EngageServerTypeTest2
} R1EngageServerType;

@protocol R1EngageSDKDelegate;

@interface R1EngageSDK : NSObject

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *trackId;
@property (nonatomic, assign) R1EngageGender gender;
@property (nonatomic, assign) NSUInteger age;

@property (nonatomic, assign) id<R1EngageSDKDelegate> delegate;

+ (instancetype)sharedInstance;

- (void) checkCompletions;

@end

@protocol R1EngageSDKDelegate <NSObject>

- (void) engageSDK:(R1EngageSDK *) engageSDK didReceiveNewReward:(NSUInteger) reward;

@end