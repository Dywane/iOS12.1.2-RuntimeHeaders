/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPMeCardCache : NSObject

+ (id)sharedInstance;

- (id)_cachedDateComponentsFromDateComponents:(id)arg1;
- (id)_dateComponentsFromCachedDateComponents:(id)arg1;
- (bool)deleteMeCardCache;
- (id)init;
- (id)loadMeCardCache;
- (bool)writeMeCardCache:(id)arg1;

@end
