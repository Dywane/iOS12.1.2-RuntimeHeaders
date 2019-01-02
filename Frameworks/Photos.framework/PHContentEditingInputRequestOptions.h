/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHContentEditingInputRequestOptions : NSObject {
    id /* block */  _canHandleAdjustmentData;
    bool  _dontAllowRAW;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
}

@property (nonatomic, copy) id /* block */ canHandleAdjustmentData;
@property (nonatomic) bool dontAllowRAW;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id /* block */)canHandleAdjustmentData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dontAllowRAW;
- (bool)isNetworkAccessAllowed;
- (id /* block */)progressHandler;
- (void)setCanHandleAdjustmentData:(id /* block */)arg1;
- (void)setDontAllowRAW:(bool)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
