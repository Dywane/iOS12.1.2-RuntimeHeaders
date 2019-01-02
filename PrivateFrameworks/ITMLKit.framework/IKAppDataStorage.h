/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppDataStorage : NSObject <IKAppDataStoring> {
    NSString * _filePath;
    unsigned long long  _format;
    NSString * _identifier;
    NSMutableDictionary * _storageDict;
    NSObject<OS_dispatch_queue> * _storageQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableDictionary *storageDict;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *storageQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_saveDict:(id)arg1;
- (void)clear;
- (unsigned long long)count;
- (id)dictionaryRepresentation;
- (id)filePath;
- (id)getDataForKey:(id)arg1;
- (id)identifier;
- (id)initWithFilePath:(id)arg1 identifier:(id)arg2;
- (id)keyAtIndex:(unsigned long long)arg1;
- (void)removeDataForKey:(id)arg1;
- (unsigned long long)setData:(id)arg1 forKey:(id)arg2;
- (void)setStorageDict:(id)arg1;
- (void)setStorageQueue:(id)arg1;
- (id)storageDict;
- (id)storageQueue;

@end
