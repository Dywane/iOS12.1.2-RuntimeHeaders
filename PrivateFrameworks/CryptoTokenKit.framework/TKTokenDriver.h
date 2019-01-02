/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenDriver : NSObject {
    NSMutableDictionary * _contexts;
    <TKTokenDriverDelegate> * _delegate;
    NSDictionary * _extensionAttributes;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _tokens;
}

@property (readonly) NSString *classID;
@property <TKTokenDriverDelegate> *delegate;
@property (retain) NSDictionary *extensionAttributes;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSMutableDictionary *tokens;

+ (id)driver;

- (void).cxx_destruct;
- (void)addTokenDriverContext:(id)arg1;
- (id)classID;
- (id)delegate;
- (id)extensionAttributes;
- (void)getTokenEndpointWithAttributes:(id)arg1 reply:(id /* block */)arg2;
- (void)getTokenWithAttributes:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)invalidateToken:(id)arg1;
- (id)queue;
- (void)releaseTokenWithTokenID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtensionAttributes:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)tokenIDForInstanceID:(id)arg1;
- (id)tokens;

@end
