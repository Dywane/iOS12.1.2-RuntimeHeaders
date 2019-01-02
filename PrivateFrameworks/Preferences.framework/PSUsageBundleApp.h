/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSUsageBundleApp : NSObject {
    NSString * _bundleIdentifier;
    NSArray * _categories;
    bool  _deletionRestricted;
    NSString * _name;
    PSWeakReference * _storageReporterReference;
    float  _totalSize;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSArray *categories;
@property (getter=isDeletionRestricted, nonatomic) bool deletionRestricted;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) float totalSize;
@property (nonatomic) <PSStorageReporting> *usageBundleStorageReporter;

+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2;
+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)categories;
- (id)description;
- (bool)isDeletionRestricted;
- (id)name;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setDeletionRestricted:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setTotalSize:(float)arg1;
- (void)setUsageBundleStorageReporter:(id)arg1;
- (float)totalSize;
- (id)usageBundleStorageReporter;

@end
