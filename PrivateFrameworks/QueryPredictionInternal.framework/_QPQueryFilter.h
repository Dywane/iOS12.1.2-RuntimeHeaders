/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPQueryFilter : NSObject {
    _PASBloomFilter * _queryBlacklist;
}

+ (id)newQueryFilter;

- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
- (id)matchesQuery:(id)arg1 withState:(struct _PASBloomFilterHashArray { Class x1; }*)arg2;
- (struct _PASBloomFilterHashArray { Class x1; }*)newStateObject;

@end
