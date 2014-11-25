#import "R1AdServerManager.h"

typedef NS_ENUM(NSUInteger, R1EngageGender)
{
  R1EngageGenderNotSelected,
  R1EngageGenderMale,
  R1EngageGenderFemale
};

typedef NS_ENUM(NSUInteger, R1EngageServerType)
{
  R1EngageServerTypeProduction,
  R1EngageServerTypeStaging,
  R1EngageServerTypeTest1,
  R1EngageServerTypeTest2
};

@protocol R1EngageSDKDelegate;



typedef void (^R1AdLoadingStatusCallbackBlock) (NSArray *completedTrackIds);

@interface R1EngageSDK : NSObject

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *trackId;
@property (nonatomic, assign) R1EngageGender gender;
@property (nonatomic, assign) NSUInteger age;

@property (nonatomic, assign) id<R1EngageSDKDelegate> delegate;

@property (nonatomic, readonly) R1AdServerManager* adServerManager;

+ (instancetype)sharedInstance;

- (void) checkCompletions;

@end

@protocol R1EngageSDKDelegate <NSObject>

- (void) engageSDK:(R1EngageSDK *) engageSDK didReceiveNewReward:(NSUInteger) reward;
- (void) engageSDK:(R1EngageSDK *)engageSDK didReceiveCompletedTrackIDs:(NSArray *)completedTrackIDs;

@end