/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSyncTask : NSObject {
    bool  _cancelled;
    <CPLEngineSyncTaskDelegate> * _delegate;
    CPLEngineLibrary * _engineLibrary;
    bool  _forceSync;
    bool  _foreground;
    <NSCoding> * _transportUserIdentifier;
}

@property (getter=isCancelled, setter=_setCancelled:) bool cancelled;
@property (retain) <CPLEngineSyncTaskDelegate> *delegate;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (nonatomic) bool forceSync;
@property (nonatomic) bool foreground;
@property (nonatomic, readonly) NSString *taskIdentifier;
@property (nonatomic, retain) <NSCoding> *transportUserIdentifier;

+ (id)taskWithEngineLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_setCancelled:(bool)arg1;
- (void)cancel;
- (id)delegate;
- (id)description;
- (unsigned long long)diskPressureState;
- (id)engineLibrary;
- (bool)forceSync;
- (bool)foreground;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isCancelled;
- (void)launch;
- (void)setDelegate:(id)arg1;
- (void)setForceSync:(bool)arg1;
- (void)setForeground:(bool)arg1;
- (void)setTransportUserIdentifier:(id)arg1;
- (void)taskDidFinishWithError:(id)arg1;
- (void)taskDidProgress:(float)arg1 userInfo:(id)arg2;
- (id)taskIdentifier;
- (id)transportUserIdentifier;

@end
