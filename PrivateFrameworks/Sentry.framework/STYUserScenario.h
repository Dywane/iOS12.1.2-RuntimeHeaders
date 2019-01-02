/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
 */

@interface STYUserScenario : NSObject {
    NSString * _appBundleId;
    NSString * _appName;
    long long  _kpi;
    NSString * _scenarioGroup;
    NSString * _scenarioID;
    NSString * _titleText;
}

@property (readonly) NSString *appBundleId;
@property (readonly) NSString *appName;
@property (readonly) long long kpi;
@property (readonly) NSString *scenarioGroup;
@property (readonly) NSString *scenarioID;
@property (readonly) NSString *titleText;

+ (id)scenarioFromSignpostEvent:(id)arg1 error:(id*)arg2;
+ (id)scenarioFromSignpostInterval:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)appName;
- (id)initWithConfiguration:(id)arg1 scenarioGroup:(id)arg2 kpi:(long long)arg3 processBundleID:(id)arg4 titleText:(id)arg5 processName:(id)arg6;
- (id)initWithLifecycleScenarioCategoryAndModelName:(id)arg1 modelName:(id)arg2 titleText:(id)arg3;
- (long long)kpi;
- (id)scenarioGroup;
- (id)scenarioID;
- (id)titleText;

@end
