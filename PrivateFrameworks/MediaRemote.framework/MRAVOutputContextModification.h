/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputContextModification : NSObject {
    MSVCallback * _callback;
    unsigned long long  _modificationType;
    NSArray * _outputDevices;
    NSString * _password;
    NSObject<OS_dispatch_source> * _timerSource;
    bool  _valid;
}

@property (nonatomic, readonly) MSVCallback *callback;
@property (nonatomic, readonly) unsigned long long modificationType;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, readonly) bool valid;

+ (id)addModificationWithDevices:(id)arg1 callback:(id)arg2;
+ (id)removeModificationWithDevices:(id)arg1 callback:(id)arg2;
+ (id)replaceModificationWithDevices:(id)arg1 callback:(id)arg2;

- (void).cxx_destruct;
- (id)callback;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 devices:(id)arg2 callback:(id)arg3;
- (void)invalidate;
- (unsigned long long)modificationType;
- (id)outputDevices;
- (id)password;
- (void)setPassword:(id)arg1;
- (bool)valid;

@end
