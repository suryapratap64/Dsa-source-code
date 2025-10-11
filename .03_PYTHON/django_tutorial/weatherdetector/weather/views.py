from django.shortcuts import render
import json
import urllib.request

# Create your views here.
def index (request):
    if request.method == 'POST':
        city = request.POST['city']
        # Here you would typically call a weather API to get the weather data for the city
        res=urllib.request.urlopen('http://api.weatherapi.com/v1/current')

        json_data = json.loads(res)

        data={
            'city': json_data['location']['name'],
            'temperature': json_data['current']['temp_c'],
            'condition': json_data['current']['condition']['text']
        }
        # For now, we will just return a placeholder response
        weather_data = {
            'city': city,
            'temperature': '25°C',
            'condition': 'Sunny'
        }
        return render(request, 'index.html', {'weather': weather_data})
    return render(request, 'index.html')