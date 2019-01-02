/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSDataDetectorsSupportedAction : BCSAction <BCSActionDelegate> {
    NSArray * _actions;
    CNContact * _contact;
    NSString * _icsString;
    DDScannerResult * _scannerResult;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *icsString;
@property (nonatomic, readonly) DDScannerResult *scannerResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionStringsArray;
- (void)_performActionAndShowActionPickerIfNeeded:(bool)arg1;
- (id)actionPickerItems;
- (id)contact;
- (id)debugDescriptionExtraInfoDictionary;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)arg1;
- (id)icsString;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (id)localizedActionDescription;
- (id)localizedDefaultActionDescription;
- (void)performAction;
- (void)performDefaultAction;
- (id)scannerResult;
- (id)url;

@end
