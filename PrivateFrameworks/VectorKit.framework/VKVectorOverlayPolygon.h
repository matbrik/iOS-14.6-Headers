/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKVectorOverlayPolygon : NSObject {
    struct shared_ptr<geo::Polygon2<double>> { 
        struct Polygon2<double> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _geometry;
    struct unique_ptr<geo::Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double>>, std::__1::hash<unsigned char>, LRUPolicy>, std::__1::default_delete<geo::Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double>>, std::__1::hash<unsigned char>, LRUPolicy>>> { 
        struct __compressed_pair<geo::Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double>>, std::__1::hash<unsigned char>, LRUPolicy> *, std::__1::default_delete<geo::Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double>>, std::__1::hash<unsigned char>, LRUPolicy>>> { 
            struct Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double>>, std::__1::hash<unsigned char>, LRUPolicy> {} *__value_; 
        } __ptr_; 
    }  _simplifiedGeometryCache;
    struct unfair_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _simplifiedGeometryCacheLock;
    struct Range<signed char> { 
        BOOL _min; 
        BOOL _max; 
    }  _worldIndexes;
}

@property (nonatomic, readonly) struct Range<signed char> { BOOL x1; BOOL x2; } worldIndexes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithMapPoints:(const struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (struct shared_ptr<geo::Polygon2<double>> { struct Polygon2<double> {} *x1; struct __shared_weak_count {} *x2; })simplifiedGeometryAtZoomLevel:(unsigned char)arg1;
- (struct Range<signed char> { BOOL x1; BOOL x2; })worldIndexes;

@end
