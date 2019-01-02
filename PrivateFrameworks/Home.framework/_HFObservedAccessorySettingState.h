/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface _HFObservedAccessorySettingState : NSObject <NAIdentifiable> {
    NSSet * _selectionOptions;
    HMAccessorySetting * _setting;
    HMAccessorySettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *selectionOptions;
@property (nonatomic, readonly) HMAccessorySetting *setting;
@property (nonatomic, readonly) HMAccessorySettings *settings;
@property (readonly) Class superclass;

+ (id)na_identity;
+ (id)stateWithSettings:(id)arg1 forSetting:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSettings:(id)arg1 setting:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)selectionOptions;
- (id)setting;
- (id)settings;

@end
