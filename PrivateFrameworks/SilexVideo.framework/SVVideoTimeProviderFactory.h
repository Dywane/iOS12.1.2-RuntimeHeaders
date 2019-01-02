/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoTimeProviderFactory : NSObject <SVVideoTimeProviderFactory> {
    <SVPlayerProviding> * _playerProvider;
    <SVTimeConverting> * _timeConverter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerProviding> *playerProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVTimeConverting> *timeConverter;

- (void).cxx_destruct;
- (id)createTimeProviderForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 timeConverter:(id)arg2;
- (id)playerProvider;
- (id)timeConverter;

@end
