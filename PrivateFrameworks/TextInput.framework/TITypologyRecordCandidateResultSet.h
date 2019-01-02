/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordCandidateResultSet : TITypologyRecord {
    TIKeyboardState * _keyboardState;
    TIKeyboardCandidateResultSet * _resultSet;
}

@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *resultSet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardState;
- (id)resultSet;
- (void)setKeyboardState:(id)arg1;
- (void)setResultSet:(id)arg1;
- (id)shortDescription;

@end
