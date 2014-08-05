typedef enum
{
    R1EngageLoadingResultHasOffers,
    R1EngageLoadingResultNoOffers,
    R1EngageLoadingResultError
} R1EngageLoadingResult;

typedef void (^R1EngageLoadingDidFinishedBlock)(R1EngageLoadingResult result, NSError *loadError);
