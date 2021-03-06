/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDFMIPSharedStateManager : NSObject

+ (id)_fmipSharedFileURL;
+ (id)_readSharedInfo;
+ (bool)_removeSharedInfo;
+ (bool)_writeSharedInfo:(id)arg1;
+ (bool)fmipActive;
+ (unsigned long long)lostModeType;
+ (void)recalculateLostMode;
+ (void)setFMiPActive:(bool)arg1;

@end
