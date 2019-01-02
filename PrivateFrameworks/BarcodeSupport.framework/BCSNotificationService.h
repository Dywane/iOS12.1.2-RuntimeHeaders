/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSNotificationService : NSObject <BCSNotificationServiceProtocol>

- (void)_cancelNotificationsForCodeType:(long long)arg1;
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(bool)arg3 reply:(id /* block */)arg4;

@end
