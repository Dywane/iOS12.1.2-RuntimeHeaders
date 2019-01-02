/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOZilchDecoderRequest : GEOMapRequest {
    GEOZilchDecoder * _decoder;
    id /* block */  _errorHandler;
    NSObject<OS_dispatch_semaphore> * _finishedSemaphore;
    NSError * _firstTileLoadingError;
    struct unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel> > { 
        struct __compressed_pair<geo::ZilchMapModel *, std::__1::default_delete<geo::ZilchMapModel> > { 
            struct ZilchMapModel {} *__value_; 
        } __ptr_; 
    }  _mapModel;
    struct shared_ptr<zilch::Message> { 
        struct Message {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _message;
    id /* block */  _pathHandler;
}

@property (copy) id /* block */ errorHandler;
@property (copy) id /* block */ pathHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_finishedDecodingWithPath:(struct Path<std::__1::shared_ptr<geo::MapEdge> > { struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_1_1_1; struct Latitude { unsigned int x_2_2_1; } x_1_1_2; } x1; struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_2_1_1; struct Latitude { unsigned int x_2_2_1; } x_2_1_2; } x2; struct vector<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge> >, std::__1::allocator<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge> > > > { struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge> > {} *x_3_1_1; struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge> > {} *x_3_1_2; struct __compressed_pair<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge> > *, std::__1::allocator<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge> > > > { struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge> > {} *x_3_2_1; } x_3_1_3; } x3; struct vector<zilch::GeometryPathElement, std::__1::allocator<zilch::GeometryPathElement> > { struct GeometryPathElement {} *x_4_1_1; struct GeometryPathElement {} *x_4_1_2; struct __compressed_pair<zilch::GeometryPathElement *, std::__1::allocator<zilch::GeometryPathElement> > { struct GeometryPathElement {} *x_3_2_1; } x_4_1_3; } x4; })arg1;
- (void)cancel;
- (void)decodeWithPathHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id /* block */)errorHandler;
- (id)initWithDecoder:(id)arg1 message:(struct shared_ptr<zilch::Message> { struct Message {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id /* block */)pathHandler;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setPathHandler:(id /* block */)arg1;

@end
