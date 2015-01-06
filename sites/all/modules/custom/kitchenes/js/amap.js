// geo-location shim
// Source: https://gist.github.com/366184

// currentely only serves lat/long
// depends on jQuery

var mapObj,toolBar,locationInfo;

//初始化地图对象，加载地图
function mapInit(){
  mapObj = new AMap.Map("iCenter");
  //地图中添加地图操作ToolBar插件
  mapObj.plugin(["AMap.ToolBar"],function(){    
    toolBar = new AMap.ToolBar(); //设置地位标记为自定义标记
    mapObj.addControl(toolBar);   
    AMap.event.addListener(toolBar,'location',function callback(e){ 
      locationInfo = e.lnglat;      
    });
  });
}
  
//获取定位位置信息
function showLocationInfo()
{
  var locationX = locationInfo.lng; //定位坐标经度值
  var locationY = locationInfo.lat; //定位坐标纬度值
}
