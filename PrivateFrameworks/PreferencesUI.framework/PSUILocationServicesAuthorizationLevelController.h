/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUILocationServicesAuthorizationLevelController : PSUILocationServicesListController {
    NSDictionary * _details;
    NSString * _displayName;
    NSBundle * _entityBundle;
    NSString * _serviceKey;
}

@property (nonatomic, retain) NSDictionary *details;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSBundle *entityBundle;
@property (nonatomic, copy) NSString *serviceKey;

- (void).cxx_destruct;
- (id)_constructFooterForAuthorizationLevel:(unsigned long long)arg1;
- (id)_purposeStringForAuthorizationLevel:(unsigned long long)arg1;
- (void)_setLocationAuthorizationLevelForSpecifier:(id)arg1;
- (void)_setLocationAuthorizationLevelMaskForAssociatedFramework:(unsigned long long)arg1;
- (id)_usageTextForAuthorizationLevel:(unsigned long long)arg1;
- (void)dealloc;
- (id)details;
- (id)displayName;
- (id)entityBundle;
- (id)init;
- (void)profileSettingsChanged:(id)arg1;
- (id)serviceKey;
- (void)setDetails:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEntityBundle:(id)arg1;
- (void)setServiceKey:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
