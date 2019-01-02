/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {
    SSPlayInfoRequestContext * _context;
    SSPlayInfoResponse * _response;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSPlayInfoRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SSPlayInfoRequestContext *playInfoContext;
@property (readonly) SSPlayInfoResponse *playInfoResponse;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithPlayInfoContext:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)playInfoContext;
- (id)playInfoResponse;
- (bool)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithPlayInfoResponseBlock:(id /* block */)arg1;

@end
