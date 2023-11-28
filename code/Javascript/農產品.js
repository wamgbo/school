import * as echarts from 'echarts';

var chartDom = document.getElementById('main');
var myChart = echarts.init(chartDom);
var option;

option = {
  xAxis: {
    type: 'category',
    data: [
      '101年',
      '102年',
      '103年',
      '104年',
      '105年',
      '106年',
      '107年',
      '108年',
      '109年',
      '110年',
      '111年'
    ]
  },
  yAxis: {
    type: 'value'
  },
  series: [
    {
      data: [
        34681388, 36130776, 37795100, 37466000, 35673648, 47549640, 48468748,
        52382172, 57900092, 55298420, 57720732
      ],
      type: 'bar'
    }
  ]
};

option && myChart.setOption(option);
