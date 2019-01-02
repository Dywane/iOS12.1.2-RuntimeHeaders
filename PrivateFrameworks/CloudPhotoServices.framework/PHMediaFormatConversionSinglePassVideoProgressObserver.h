/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
 */

@interface PHMediaFormatConversionSinglePassVideoProgressObserver : NSObject {
    unsigned long long  _lastFileSize;
    NSFileHandle * _observedFileHandle;
    NSURL * _observedFileURL;
    NSProgress * _progress;
    PHMediaFormatConversionRequest * _request;
}

@property unsigned long long lastFileSize;
@property (retain) NSFileHandle *observedFileHandle;
@property (retain) NSURL *observedFileURL;
@property (retain) NSProgress *progress;
@property PHMediaFormatConversionRequest *request;

- (void).cxx_destruct;
- (unsigned long long)lastFileSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedFileHandle;
- (id)observedFileURL;
- (id)progress;
- (id)request;
- (void)setLastFileSize:(unsigned long long)arg1;
- (void)setObservedFileHandle:(id)arg1;
- (void)setObservedFileURL:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)startObservingProgress:(id)arg1 forRequest:(id)arg2;
- (void)stopObserving;

@end
