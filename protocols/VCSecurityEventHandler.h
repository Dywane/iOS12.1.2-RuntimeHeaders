/* Generated by EzioChiu.
 */

@protocol VCSecurityEventHandler <NSObject>

@required

- (bool)handleEncryptionInfoChange:(NSDictionary *)arg1;
- (void)resetDecryptionTimeout;

@end
