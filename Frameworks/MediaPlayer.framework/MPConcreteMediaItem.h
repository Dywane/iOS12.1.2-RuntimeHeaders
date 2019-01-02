/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPConcreteMediaItem : MPMediaItem <MPCacheableConcreteMediaEntity, NSCopying> {
    MPMediaLibrary * _library;
    unsigned long long  _persistentID;
    MPConcreteMediaEntityPropertiesCache * _propertiesCache;
    NSObject<OS_dispatch_queue> * _utilitySerialQueue;
}

@property (nonatomic, readonly, retain) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;

+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3;
- (id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(bool*)arg2;
- (id)cachedPropertyValues;
- (id)cachedValueForProperty:(id)arg1 isCached:(bool*)arg2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)didSkipWithPlayedToTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)existsInLibrary;
- (void)incrementPlayCount;
- (void)incrementPlayCountForPlayingToEnd;
- (bool)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementSkipCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
- (void)invalidateCachedProperties;
- (Class)itemArrayCoderPIDDataCodingClass;
- (void)markNominalAmountHasBeenPlayed;
- (id)mediaLibrary;
- (double)nominalHasBeenPlayedThreshold;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(bool)arg2;
- (unsigned long long)persistentID;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id /* block */)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
