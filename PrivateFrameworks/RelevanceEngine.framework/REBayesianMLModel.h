/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REBayesianMLModel : REMLModel {
    struct BayesianModel { 
        struct _opaque_pthread_rwlock_t { 
            long long __sig; 
            BOOL __opaque[192]; 
        } m_rwlock; 
        struct unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::__1::allocator<std::__1::pair<const unsigned long long, Gaussian> > > { 
            struct __hash_table<std::__1::__hash_value_type<unsigned long long, Gaussian>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, Gaussian> > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> {} **__value_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> {} *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true> > { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true> > { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } m_features; 
        int m_nFeaturesCount; 
        unsigned long long m_nTotalTrue; 
        unsigned long long m_nTotalExamples; 
        double m_dSumPredictions; 
        double m_dLogScore; 
        double m_dNormalizedLogScore; 
        int m_nModelVersion; 
        unsigned long long m_nCalibrationCurveTrue[10]; 
        unsigned long long m_nCalibrationCurveCount[10]; 
        unsigned long long m_maxFeatureCoordinates; 
        unsigned long long m_nNumberOfTraining; 
        struct Gaussian { 
            double m_dPrecision; 
            double m_dPredicionMean; 
        } m_empty; 
    }  _model;
    unsigned long long  _numberOfFeatures;
}

+ (unsigned long long)featureBitWidth;
+ (unsigned long long)maxFeatureCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearModel;
- (long long)_getNumberOfCoordinates;
- (void)_loadFeatureVector:(struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { unsigned long long *x_3_1_1; } x3; }*)arg1 fromFeatureMap:(id)arg2;
- (bool)_loadModelFromURL:(id)arg1 error:(id*)arg2;
- (unsigned long long)_maxFeatureCoordinates;
- (id)_predictWithFeatures:(id)arg1;
- (bool)_saveDebugModelToURL:(id)arg1 error:(id*)arg2;
- (bool)_saveModelToURL:(id)arg1 error:(id*)arg2;
- (bool)_saveModelToURL:(id)arg1 includeDebugData:(bool)arg2 error:(id*)arg3;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)initWithFeatureSet:(id)arg1;

@end
