/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKSourceRevisionFilter : _HKFilter {
    unsigned long long  _operatorType;
    NSSet * _sourceRevisions;
}

@property (nonatomic, readonly) unsigned long long operatorType;
@property (nonatomic, readonly) NSSet *sourceRevisions;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_filterForComparisonWithKeyPath:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4;
+ (id)_filterForInOperatorWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3;
+ (bool)exactMatchRequired;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithSourceRevisions:(id)arg1 operatorType:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorType;
- (id)sourceRevisions;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)_sourceRevisionsWithProfile:(id)arg1 error:(id*)arg2;
- (id)predicateWithProfile:(id)arg1;

@end
