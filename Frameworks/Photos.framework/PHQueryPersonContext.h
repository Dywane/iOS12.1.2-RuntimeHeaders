/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions * _fetchOptions;
}

+ (unsigned long long)peopleHomeUnverifiedFaceCountThreshold;
+ (id)subpredicatesForFetchOptions:(id)arg1;

- (void).cxx_destruct;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)arg1;
- (id)_notHiddenTypePredicate;
- (id)_notVerifiedPredicate;
- (id)_verifiedPredicate;
- (id)_verifiedVisiblePredicate;
- (id)initWithFetchOptions:(id)arg1;
- (id)personContextAdditionalPredicate;
- (id)personContextDetailPredicate;
- (id)personContextNonePredicates;
- (id)personContextOneUpPredicate;
- (id)personContextPeopleHomePredicate;
- (id)subpredicates;

@end
