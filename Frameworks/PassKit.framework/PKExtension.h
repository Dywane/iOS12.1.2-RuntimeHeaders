/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKExtension : NSObject {
    NSString * _identifier;
    PKExtensionProvider * _provider;
}

@property (nonatomic, readonly) NSString *extensionPointIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) PKExtensionProvider *provider;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)beginRemoteViewControllerExtensionServiceWithInputItems:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (id)extension;
- (id)extensionPointIdentifier;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 provider:(id)arg2;
- (id)provider;
- (void)setProvider:(id)arg1;
- (long long)type;

@end
