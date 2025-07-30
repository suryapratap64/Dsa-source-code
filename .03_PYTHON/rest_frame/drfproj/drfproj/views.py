from django.shortcuts import render
from rest_framework.views import APIView
from rest_framework.response import Response
from drfapp.serializers import StudentSerializers
from drfapp.models import Student

class TestView(APIView):
    def get(self, request, *args, **kwargs):
        data = {
            'username': 'admin',
            'years_active': 5,
        }
        return Response(data)
    
    def post(self,request, *args, **kwargs):
        serializer=StudentSerializers(data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data)
        return Response(serializer.errors)