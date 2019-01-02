/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard> {
    <IKAppKeyboardBridge> * _appBridge;
}

@property (nonatomic, retain) <IKAppKeyboardBridge> *appBridge;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)appBridge;
- (void)jsTextDidChange;
- (void)setAppBridge:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
