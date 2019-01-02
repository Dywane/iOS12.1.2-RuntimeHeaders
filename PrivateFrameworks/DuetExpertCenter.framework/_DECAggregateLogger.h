/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECAggregateLogger : NSObject {
    NSMutableDictionary * _batchScalars;
}

+ (void)logIncrementKey:(id)arg1;
+ (double)logKey:(id)arg1 blockTiming:(id /* block */)arg2;
+ (void)logKey:(id)arg1 distValue:(double)arg2;
+ (void)logKey:(id)arg1 replaceScalarValueWith:(long long)arg2;
+ (void)logKey:(id)arg1 scalarValue:(long long)arg2;
+ (void)logWithCallback:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)flush;
- (id)initCallbackInstance;
- (void)logIncrementKey:(id)arg1;
- (void)logKey:(id)arg1 distValue:(double)arg2;
- (void)logKey:(id)arg1 scalarValue:(long long)arg2;

@end
